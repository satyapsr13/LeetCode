class Solution {
    unordered_map<int,string>mp;
    void loadRoman()
    {
            mp[1]="I";
            mp[2]="II";
            mp[3]="III";
            mp[4]="IV";
            mp[5]="V";
            mp[6]="VI";
        
            mp[7]="VII";
            mp[8]="VIII";
            mp[9]="IX";
            mp[10]="X";
            mp[50]="L";
            mp[100]="C";
            mp[500]="D";
            mp[1000]="M";

    }
public:
    string intToRoman(int num) {
        
        string ans="";
        
        if(num==0)
            return ans;
        if(num>=1000)
        {
            ans+="M";
            return ans+intToRoman(num-1000);
        }else if(num>=900)
        {
                   ans+="CM";
                   return ans+intToRoman(num-900);
            
        }else if(num>=500)
        {
                   ans+="D";
                   return ans+intToRoman(num-500);
            
        }else if(num>=400)
        {
                   ans+="CD";
                   return ans+intToRoman(num-400);
            
        }else if(num>=100)
        {
                   ans+="C";
                   return ans+intToRoman(num-100);
            
        }else if(num>=90)
        {
                   ans+="XC";
                   return ans+intToRoman(num-90);
            
        }else if(num>=50)
        {
                   ans+="L";
                   return ans+intToRoman(num-50);
            
        }else if(num>=40)
        {
                   ans+="XL";
                   return ans+intToRoman(num-40);
            
        }else if(num>= 10 )
        {
                   ans+="X";
                   return ans+intToRoman(num-10);
            
        }else if(num>=9)
        {
                   ans+="IX";
                   return ans+intToRoman(num-9);
            
        }else if(num>=5)
        {
                   ans+="V";
                   return ans+intToRoman(num-5);
            
        }else if(num>=4)
        {
                   ans+="IV";
                   return ans+intToRoman(num-4);
            
        }else if(num>=1)
        {
                   ans+="I";
                   return ans+intToRoman(num-1);
            
        }
        
        return ans;
    }
};