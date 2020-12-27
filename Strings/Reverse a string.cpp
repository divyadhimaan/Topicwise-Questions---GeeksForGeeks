string reverseWord(string str){
    
  string s="";
  int i,j;
  for(i=str.length()-1;i>=0;i--)
  {
      s+=str[i];
  }
  return s;
}
