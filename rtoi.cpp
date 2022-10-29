 #include<iostream> //roman to int conversion
 #include<string>
 using namespace std;

 int fun(char k){
            switch (k){
                case 'I':
                return 1;
                break;
                case 'V':
                return 5;
                break;
                case 'X':
                return 10;
                break;
                case 'L':
                return 50;
                break;
                case 'C':
                return 100;
                break;
                case 'D':
                return 500;
                break;
                case 'M':
                return 1000;
                break;

            }
            return 0;
        }
    int romanToInt(string s) {
        int n=s.size();
        int m=0,sum=0;
        for(int i=n-1;i>=0;i--){
            int k=fun(s[i]);
            int m=fun(s[i-1]);
            if(m<k){
                sum=sum+(k-m);
                i=i-1;
            }
            else{
               sum=sum+k;
            }
        }
        return sum;
    }
    int main(){
        string o;
        cin>>o;
        // cout<<o[-1];
        int ma=romanToInt(o);
        cout<<ma;
    }