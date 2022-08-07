int makeBeautiful(string a) {
	// Write your code here
    int l = a.length();
   int c1=0,c2=0;
    for(int i = 0 ; i < l; i++){
       if(i%2==0 && a[i]=='1'){c1++;}
       if(i&1  && a[i]=='0'){c1++;}
        if(i&1 && a[i]=='1'){c2++;}
        if(i%2==0 && a[i]=='0'){c2++;}
        
        
       
    }
  // cout<<min(c1,c2);
    return min(c1,c2);
}