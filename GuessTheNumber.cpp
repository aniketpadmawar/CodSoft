#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"\n\t\t* Welcome To The Guess The Number Game *"<<endl;
    cout<<"\nYou have to guess number between 1 to 100.\nYou'll have limited choices base on the level you choose.\nGood Luck!!"<<endl;
    cout<<"\n\nEnter the difficulty level :"<<endl;
    cout<<"1:for easy"<<endl;
    cout<<"2:for medium"<<endl;
    cout<<"3:for difficult"<<endl;
    cout<<"0:for ending the game"<<endl;
    while(true){
        int difficulty_choice;
        cout<<"Enter your choice: ";
        cin>>difficulty_choice;
        srand(time(0));
        int secret_number=1+(rand()%100);//these two lines are very important
        int player_choice;
        if(difficulty_choice==1){
            cout<<"\nYou have 10 choices for finding correct number"<<endl;
            int choice_left=10;
            for(int i=0;i<10;i++){
                cout<<"\nEnter the number: ";
                cin>>player_choice;
                if(player_choice==secret_number){
                    cout<<"Well played! You Won!!, "<<player_choice<<" is the correct guess."<<endl;
                    cout<<"Thanks for playing"<<endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout<<"Nope,your guess is wrong"<<endl;
                    if(player_choice>secret_number){
                        cout<<"The secret number is smaller than the number you guess."<<endl;
                    }else{
                        cout<<"The secret number is greater than the number you guess."<<endl;
                    }
                    choice_left--;
                    cout<<choice_left<<" Choice lefts."<<endl;
                    if(choice_left==0){
                        cout<<"You couldn't find the secret number,it was "<<secret_number<<endl;
                        cout<<"Play the game again to win."<<endl;
                        cout<<"Thank You :)"<<endl;
                    }
                }
            }
        }else if(difficulty_choice==2){
            cout<<"You have 5 choices for finding correct number"<<endl;
            int choice_left=5;
            for(int i=0;i<5;i++){
                cout<<"\n\nEnter the number: ";
                cin>>player_choice;
                if(player_choice==secret_number){
                    cout<<"Well played! You Won!!, "<<player_choice<<" is the correct guess."<<endl;
                    cout<<"Thanks for playing"<<endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                }else{
                    cout<<"Nope,your guess is wrong"<<endl;
                    if(player_choice>secret_number){
                        cout<<"The secret number is smaller than the number you guess."<<endl;
                    }else{
                        cout<<"The secret number is greater than the number you guess."<<endl;
                    }
                    choice_left--;
                    cout<<choice_left<<" Choice lefts."<<endl;
                    if(choice_left==0){
                        cout<<"You couldn't find the secret number,it was "<<secret_number<<endl;
                        cout<<"Play the game again to win."<<endl;
                        cout<<"Thank You :)"<<endl;
                    }
                }
            }
        }else if(difficulty_choice==3){
            cout<<"You have 3 choices for finding correct number"<<endl;
            int choice_left=3;
            for(int i=0;i<3;i++){
                cout<<"\n\nEnter the number: ";
                cin>>player_choice;
                if(player_choice==secret_number){
                    cout<<"Well played! You Won!!, "<<player_choice<<" is the correct guess."<<endl;
                    cout<<"Thanks for playing"<<endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                }else{
                    cout<<"Nope,your guess is wrong"<<endl;
                    if(player_choice>secret_number){
                        cout<<"The secret number is smaller than the number you guess."<<endl;
                    }else{
                        cout<<"The secret number is greater than the number you guess."<<endl;
                    }
                    choice_left--;
                    cout<<choice_left<<" Choice lefts."<<endl;
                    if(choice_left==0){
                        cout<<"You couldn't find the secret number,it was "<<secret_number<<endl;
                        cout<<"Play the game again to win."<<endl;
                        cout<<"Thank You :)"<<endl;
                    }
                }
            }
        }else if(difficulty_choice==0){
            exit(0);
        }else{
            cout<<"Please Enter a valid input..."<<endl;
        }
    }
    return 0;
}
