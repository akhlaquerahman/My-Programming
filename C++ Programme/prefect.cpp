#include<iostream>
using namespace std;
int main(){
    int i=1;
    int u=1;
    int sum=0;

    cout<<"display the prefect number";
    while(i<=500){
        while(u<=500){
            if(u<i){
                if(i%u==0)
                sum=sum+u;
            }
           
        }
        u++;
    }
}