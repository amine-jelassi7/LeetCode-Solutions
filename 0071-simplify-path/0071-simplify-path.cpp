class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string ans="";
        if(path[0]!='/') return ans; 
        int n=path.length();
        int i=0;
        string temp=""; 
        while(i<n)
        {
            while (i < n && path[i] == '/') i++; 
            while(i<n&&path[i]!='/')
            {
                temp+=path[i];
                i++;
            }
            if(i<n&&path[i]=='/')
            {
                if(temp=="..")
                {
                    if(!st.empty())
                    {
                        st.pop();
                    }
                    temp="";
                    i++;
                }
                else if(temp=="//") 
                {
                    temp="";
                    i++;
                }
                else if(temp==".") 
                {
                    i++;
                    temp="";
                }
                else
                {
                st.push(temp);
                temp="";
                i++;
                }   
            }
        }
        if(temp!="")
        {
            if(temp=="..")
            {
                if(!st.empty()) st.pop();
            }
            else if(temp!=".")
            {
                st.push(temp);
            }
        }
        while(!st.empty())
        {
            ans.insert(0,"/"+st.top());
            st.pop();
        }
        
        return ans.empty() ? "/" : ans;
    }
};