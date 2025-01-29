const tiles = document.querySelectorAll('.tile');
    const startBtn = document.getElementById('start-btn');
    const statusText = document.getElementById('status');

    let gameSequence = [];
    let playerSequence = [];
    let level = 0;

    function playSound(color) {
      const audio = new Audio(`https://s3.amazonaws.com/freecodecamp/simonSound${['green', 'red', 'yellow', 'blue'].indexOf(color) + 1}.mp3`);
      audio.play();
    }

    function activateTile(color) {
      const tile = document.querySelector(`.tile.${color}`);
      tile.classList.add('active');
      playSound(color);
      setTimeout(() => tile.classList.remove('active'), 500);
    }

    function nextStep() {
      const colors = ['green', 'red', 'yellow', 'blue'];
      const randomColor = colors[Math.floor(Math.random() * colors.length)];
      gameSequence.push(randomColor);
      showSequence();
    }

    function showSequence() {
      let delay = 0;
      gameSequence.forEach((color, index) => {
        setTimeout(() => activateTile(color), delay);
        delay += 600;
      });

      setTimeout(() => {
        statusText.textContent = `Your turn: Level ${level}`;
        enablePlayerInput();
      }, delay);
    }

    function enablePlayerInput() {
      playerSequence = [];
      tiles.forEach(tile => {
        tile.addEventListener('click', handlePlayerClick);
      });
    }

    function disablePlayerInput() {
      tiles.forEach(tile => {
        tile.removeEventListener('click', handlePlayerClick);
      });
    }

    function handlePlayerClick(event) {
      const color = event.target.dataset.color;
      playerSequence.push(color);
      playSound(color);
      activateTile(color);

      const currentStep = playerSequence.length - 1;
      if (playerSequence[currentStep] !== gameSequence[currentStep]) {
        gameOver();
        return;
      }

      if (playerSequence.length === gameSequence.length) {
        disablePlayerInput();
        level++;
        statusText.textContent = `Good job! Starting Level ${level}...`;
        setTimeout(() => nextStep(), 1000);
      }
    }

    function startGame() {
      level = 1;
      gameSequence = [];
      statusText.textContent = 'Watch the sequence!';
      nextStep();
    }

    function gameOver() {
      statusText.textContent = 'Game Over! Press Start to try again.';
      disablePlayerInput();
    }

    startBtn.addEventListener('click', () => {
      startGame();
    });