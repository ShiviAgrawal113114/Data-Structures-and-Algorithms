#include<bits/stdc++.h>
using namespace std;

int cal(long long int p, long long int q, long long int r, long long int a, long long int b, long long int c)
{
    //ans = 0;
    if((a == p) && (b == q) && (c == r))
       return 0;
    
    //ans = 1;
    
    //1 diff
    if( ((a == p)&&(b == q)) || ((b == q)&&(c == r)) || ((c == r)&&(a == p)) )
        return 1;
        
    //2 diff
    if( ((a == p) && ( ((b-q)==(c-r)) || (q!=0 && r!=0 && (b/q == c/r) && ((q + b%q)%q == 0) && ((r + c%r)%r == 0)) )   ) ||
         ((b == q) && ( ((a-p)==(c-r)) || (p!=0 && r!=0 && (a/p == c/r) && ((p + a%p)%p == 0) && ((r + c%r)%r == 0)) )   )  ||
         ((c == r) && ( ((b-q)==(a-p)) || (q!=0 && p!=0 && (b/q == a/p) && ((q + b%q)%q == 0) && ((p + a%p)%p == 0)) )   ) )
           return 1;
           
    //3 diff
    if( ((a-p) == (b-q)) && ((b-q) == (c-r)) && ((c-r) == (a-p)) )
        return 1;
        
    if( p!=0 && q!=0 && r!=0 && (a/p == b/q) && (b/q == c/r) && (a/p == c/r) && ((p + a%p)%p == 0) && ((q + b%q)%q == 0) && ((r + c%r)%r == 0))
        return 1;
        
    
    //ans = 2 
    //2 diff
    if((a == p) || (b == q) || (c == r))
        return 2;
    
    //2 have same...............  diff.........
    if( ((a-p) == (b-q)) || ((b-q) == (c-r)) || ((c-r) == (a-p)) )
        return 2;
        
    int x, y;
    y = c-r;
    
    if( p != 0 && q!= 0 && (a/p == b/q) && ( (p + a%p)%p == (q + b%q)%q ) && ((p + a%p)%p == 0) ) 
        return 2;
        
    if( p!= 0 && q!= 0 && ((a-y)/p == (b-y)/q) && (p+(a-y)%p)%p == 0 && (q+(b-y)%q)%q == 0 )
        return 2;
        
    if( (p+y) != 0 && (q+y) != 0 && ( a/(p+y) == b/(q+y)) && ( ((p+y) + a%(p+y))%(p+y) == 0) && ( ((q+y)+b%(q+y))%(q+y) == 0) ) 
       return 2;
    
    if( p!=0 && q!=0 && ((b-y)/q == a/p) && (q + (b-y)%q)%q == 0 && (p + a%p)%p == 0 )
       return 2;
          
    if( p!=0 && q!=0 && ((a-y)/p == b/q) && (p + (a-y)%p)%p == 0 && (q + b%q)%q == 0 )
       return 2;
       
    if(p!=0 && (q+y)!= 0 && (a/p == b/(q+y)) && (p+ a%p)%p == 0 && ( (q+y) + b%(q+y))%(q+y)== 0)
       return 2;
       
    if(q!=0 && (p+y)!= 0 && (b/q == a/(p+y)) && (q + b%q)%q == 0 && (p+y+ a%(p+y))%(p+y)== 0)
       return 2;
          
          
          
          
    y = a-p;
    
    if( r != 0 && q!= 0 && (c/r == b/q) && ( (r+c%r)%r == (q+b%q)%q ) && ((r+c%r)%r == 0) )
        return 2;
        
    if( r!= 0 && q!= 0 && ((c-y)/r == (b-y)/q) && (r+(c-y)%r)%r == 0 && (q+(b-y)%q)%q == 0 )
        return 2;
        
    if( (r+y) != 0 && (q+y) != 0 && ( c/(r+y) == b/(q+y)) && ((r+y+c%(r+y))%(r+y) == 0) && ((q+y+b%(q+y))%(q+y) == 0) ) 
       return 2;
    
    if( r!=0 && q!=0 && ((b-y)/q == c/r) && (q+(b-y)%q)%q == 0 && (r+c%r)%r == 0 )
       return 2;
          
    if( r!=0 && q!=0 && ((c-y)/r == b/q) && (r+(c-y)%r)%r == 0 && (q+b%q)%q == 0 )
       return 2;
       
    if(r!=0 && (q+y)!= 0 && (c/r == b/(q+y)) && (r+c%r)%r == 0 && (q+y+b%(q+y))%(q+y)== 0)
       return 2;
       
    if(q!=0 && (r+y)!= 0 && (b/q == c/(r+y)) && (q+b%q)%q == 0 && (r+y+c%(r+y))%(r+y)== 0)
       return 2;
    
    
    
    
    
    
    
    
    y = b-q;
    
    if( p != 0 && r!= 0 && (a/p == c/r) && ( (p+a%p)%p == (r+c%r)%r ) && ((p+a%p)%p == 0) )
        return 2;
        
    if( p!= 0 && r!= 0 && ((a-y)/p == (c-y)/r) && (p+(a-y)%p)%p == 0 && (r+(c-y)%r)%r == 0 )
        return 2;
        
    if( (p+y) != 0 && (r+y) != 0 && ( a/(p+y) == c/(r+y)) && ((p+y+a%(p+y))%(p+y) == 0) && ((r+y+c%(r+y))%(r+y) == 0) ) 
       return 2;
    
    if( p!=0 && r!=0 && ((c-y)/r == a/p) && (r+(c-y)%r)%r == 0 && (p+a%p)%p == 0 )
       return 2;
          
    if( p!=0 && r!=0 && ((a-y)/p == c/r) && (p+(a-y)%p)%p == 0 && (r+c%r)%r == 0 )
       return 2;
       
    if(p!=0 && (r+y)!= 0 && (a/p == c/(r+y)) && (p+a%p)%p == 0 && (r+y+c%(r+y))%(r+y)== 0)
       return 2;
       
    if(r!=0 && (p+y)!= 0 && (c/r == a/(p+y)) && (r+c%r)%r == 0 && (p+y+a%(p+y))%(p+y)== 0)
       return 2;
    
    
    
    ////////////////////////////////////////////////////
    if(r != 0 && (c%r == 0))
    {
        x = c/r;
        if( (a - p*x) == (b - q*x) )
            return 2;
        
        if(x!=0)
        {
            if( (a/x == (p+y)) && (b/x == (q+y)) )
               return 2;
        }
        if( a == 0 && b == 0)
              return 2;
    }
    if(q != 0 && (b%q == 0))
    {
        x = b/q;
        if( (a - p*x) == (c - r*x) )
            return 2;
        
        if(x!=0)
        {
            if( (a/x == (p+y)) && (c/x == (r+y)) )
               return 2;
        }
        if( a == 0 && c == 0)
              return 2; 
    }
    if(p != 0 && (a%p == 0))
    {
        x = a/p;
        if( (c - r*x) == (b - q*x) )
            return 2;
        
        if(x!=0)
        {
            if( (c/x == (r+y)) && (b/x == (q+y)) )
               return 2;
        }
        if( c == 0 && b == 0)
              return 2; 
    }
    //////////////////////////////////////////////////////////////
    
    
    //3 diff  done only for p q.................do same for other 2..........................
    if(p != q)
    {
    x = (b-a)/(q-p);
    y = a - p*x;
    if( (r*x + y) == c && (b - q*x)== y)
       return 2;
    }   
    if(x != 0)
    {
        y = (a-p*x)/(x);
        int yy = (b-q*x)/(x);
        if( (r*x + y*x) == c && (b-q*x)%x == 0 && (a-p*x)%x == 0 && (y == yy) )
          return 2;
    }
    
    return 3;   
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p, q, r, a, b, c;
        cin>>p>>q>>r;
        cin>>a>>b>>c;
        
        int ans = cal(p, q, r, a, b, c);
        cout<<ans<<endl;
    }
}
