#include <iostream>

using namespace std;

// string reverse

int main()
{
    
    int input[50] , output[50] , count , i;
    	
    
    cin >> count;
    for(i=0; i<count; i++ ){
        cin>>input[i];
        
    }
    
    for(i=0; i<count; i++){
        output[i]= input[count -i-1];
    }
    cout<<"the reverse of the array is"<<endl;
    for(i=0; i<count; i++){
        
        cout<< output[i]<<" ";
    }
    return 0;
    
}
