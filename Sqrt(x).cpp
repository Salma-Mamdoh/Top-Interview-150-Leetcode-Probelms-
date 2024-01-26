class Solution {
public:
    int mySqrt(int x) {
      if(x==1){return 1;}
      long long  start=0;
      long long  end=x;
      long long  mid=x/2;
     while(end-start>1){
          if(1LL*mid*mid==x)return mid;
          else if(mid*mid>x)end=mid;
          else start=mid;
          mid=(start+end)/2;
      }
      return mid;
    }
};
