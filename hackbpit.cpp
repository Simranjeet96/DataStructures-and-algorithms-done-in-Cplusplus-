#include <iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
int q;
    int64_t xp,nb;
    cin>>q;
    while(q--)
    {
    cin>>xp>>nb;
    if(xp==0||nb==0){cout<<0;}
        else
        if(xp==1&&nb==1){cout<<0;}
        else
    if(nb==xp)
    {
    if(nb%3==0){cout<<(nb/3)*2;}
    else if(nb%3==1){cout<<(nb/3)*2;}
    else if(nb%3==2){cout<<((nb/3)*2)+1;}
    }
    else {
            int k=0;
           int64_t nb_used=0;
             int64_t xp_used=0;
             int64_t teams=0;
            int64_t xp_left=0,nb_left=0;
            while(xp_used!=xp&&nb_used!=nb)
            {
                nb_left=nb-nb_used;
                xp_left=xp-xp_used;
             if(nb_left>xp_left)
             {
                 teams++;
                 nb_used=nb_used+2;
                 xp_used=xp_used+1;
             }
             else
             if(nb_left<xp_left)
             {
                 teams++;
                 nb_used=nb_used+1;
                 xp_used=xp_used+2;
             }
             else if(nb_left==xp_left)
                 {
                 k=1;
                 if(nb_left%3==0){cout<<(teams+(nb_left/3)*2);break;}
                 else if(nb_left%3==1){cout<<(teams+(nb_left/3)*2);break;}
                 else if(nb_left%3==2){cout<<(teams+((nb_left/3)*2)+1);break;}
                    }

            }
        if(k!=1)
        { cout<<teams;}
    }
        cout<<endl;
    }

    return 0;
}
