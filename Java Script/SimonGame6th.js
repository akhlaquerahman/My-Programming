let gameSequence = [];
        let userSequence = [];
        const buttons = ["yellow", "pink", "gray", "blue"];
        let level = 0;
        let started = false;

        const h3 = document.querySelector("h3");

        // Start the game on any key press
        document.addEventListener("keypress", function () {
            if (!started) {
                started = true;
                level = 0; // Reset the level on restart
                gameSequence = []; // Reset the sequence
                nextLevel();
            }
        });

        // Add click events to each button
        document.querySelectorAll("[type='button']").forEach((btn) => {
            btn.addEventListener("click", function () {
                const userChoice = this.id;
                userSequence.push(userChoice);
                flashButton(this);
                checkAnswer(userSequence.length - 1);
            });
        });

        // Flash effect for the button
        function flashButton(button) {
            button.classList.add("flass");
            setTimeout(() => button.classList.remove("flass"), 250);
        }

        // Move to the next level
        function nextLevel() {
            userSequence = [];
            level++;
            h3.innerText = `Level ${level}`;

            const randomColor = buttons[Math.floor(Math.random() * 4)];
            gameSequence.push(randomColor);

            // Show the sequence to the user
            setTimeout(() => playSequence(), 500);
        }

        // Play the game sequence
        function playSequence() {
            gameSequence.forEach((color, index) => {
                setTimeout(() => {
                    const button = document.getElementById(color);
                    flashButton(button);
                }, 500 * index);
            });
        }

        // Check user's answer
        function checkAnswer(currentIndex) {
            if (userSequence[currentIndex] === gameSequence[currentIndex]) {
                if (userSequence.length === gameSequence.length) {
                    // Move to the next level if the user completes the sequence
                    setTimeout(nextLevel, 1000);
                }
            } else {
                // Game Over
                gameOver();
            }
        }

        // Handle game over
        function gameOver() {
            h3.innerText = `Game Over! You reached Level ${level}. Press any key to restart.`;
            gameSequence = [];
            userSequence = [];
            level = 0;
            started = false;
        }