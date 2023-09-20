
        
    return -1;
    
}}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
    cout<<endl;
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    if (linearsearch(arr,n,key)== -1){
        cout<< "it not  exists"<<endl;
    }
    else {
        cout << "exis