#include <iostream>
#include <vector>
using namespace std;

vector<int> BubbleSort(vector<int> arr){
    bool status= false;
    for(int j=arr.size();j>0;j--){
        for(int i=1;i<j;i++){
            if(arr[i-1]>arr[i]){
                swap(arr[i-1],arr[i]);
                status= true;
            }
        }
    }
    return arr;
}

void input(){
    vector<int> arr = {};
    int input, lenght;
    cout << "Enter the size of the array: ";
    cin >> lenght;
    cout << "enter the elements: ";
    for (int k = 0; k < lenght; k++) {
        cin >> input;
        arr.push_back(input);
    }
    cout <<"Your array is: ";
    for (int i: arr) { cout << i << " "; };
    cout << endl;
    arr = BubbleSort(arr);
    cout << "Your sorted array is: ";
    for (int i: arr) { cout << i << " "; };
    cout << endl;

}

int main() {
    int check=0;
    while (check!=-1){
        input();
        cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Are you want to continue.Press (-1) if you want to quit.Else press any key:";
        cin>>check;
        cout << endl;
    }
}