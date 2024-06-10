#include <iostream>
using namespace std; 

int multiplication(int x,int y, int z){
    int result = x*y*z;
    return result;
}

void printnamefivetimes(){
    for (int i = 1; i<=10; i++){
        cout<<"Sakshi"<<endl;
    }
}

void printmultiples(int num){
    for (int i = 1; i<=10; i++){
        cout<<num*i<<endl;
    }
}

int convertintocelcius(int far){
    int celcius = (far-32)*5/9;
    return celcius;
}

char convertintouppercase(char ch){
    char answer = ch-'a' + 'A';
    return answer; 
}

int main(){
    int multiplicationanswer= multiplication(5,4,3);
    cout <<multiplicationanswer << endl;

    int no = 5;
    printmultiples(no);

    int far = 32;
    int ans = convertintouppercase(far);
    cout<< "Celcius is:"<< ans <<endl;

    char result = convertintouppercase('k');
    cout<<result<<endl;
}