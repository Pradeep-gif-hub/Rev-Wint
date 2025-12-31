void checkString(string s) {
    int v = 0;
    int c = 0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||
        s[i]=='o' || s[i]=='u'){
            v+=1;
        } 
        else{
            c+=1;;
        }
        }
    }

   

    if (v > c)
        cout << "Yes";
    else if (c > v)
        cout << "No";
    else
        cout << "Same";

    cout << endl;
}