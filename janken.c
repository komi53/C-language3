#include <stdio.h>
#include <stdlib.h>
int com(int a, int b) {
  if(a != 0 || b != 0){
      if(a > b){
        return b;
      }else if(a == b){
        return a;
      }else if(a < b){
        return a;
      }
  }
    return 0;
}
int main(void){
    int N, M;
    char s_i[10000];
    int result;
    int g = 0, c = 0, p = 0;
    double par_c = 0, rem;
    int last_times = 0, last_fingers = 0, par_p;
    scanf("%i %i\n", &N, &M);
    scanf("%s", s_i);
                    //ジャンケンの手を振り分け
    for(int i = 0 ; i < N ; i++){
      if(s_i[i] == 'G'){
        g += 1;
      }else if(s_i[i] == 'C'){
        c += 1;
      }else if(s_i[i] == 'P'){
        p += 1;
      }
    }
    printf("%i %i %i\n",g, c, p );
    if( M > (g * 5 + p * 2)){
      if((M % 2 != M % 5) && (g + p > c)){
        par_c = M / 2;
        rem = M % 2;
        if(rem != 0){
          par_c = par_c - 2;
          last_times = N - par_c;
          last_fingers = M - (par_c * 2);
          while( (last_fingers % 5) != 0 ){
            par_c = par_c - 3;
            last_fingers = last_fingers + 6;
            last_times = last_times + 3;
          }
          par_p = last_fingers / 5;
          last_times = last_times - par_p;
        }else{
          par_p = 0;
          last_times = N;
          while( (par_c + par_p) >= N ){
            par_c = par_c - 5;
            par_p += 2;
          }
          last_times = last_times - par_c - par_p;
      }
      }else{
        last_fingers = M;
        last_times = N;
        par_p = last_fingers / 5;
        last_times = last_times - par_p;
      }
      
    }else{
      if((M % 2) != (M % 5) && (g + p) > c){
        par_p = M / 5;
        rem = M % 5;
        if(rem != 0){
          par_c = rem / 2;
          last_times = N - par_c - par_p;
        }
      }else{
        if( M / 5 >= 1 ){
          par_p = M / 5;
          rem = M % 5;
        }else{
          par_p = 0;
          rem = M;
        }
        par_c = rem / 2;
        last_times = N - par_c - par_p;
      }
    }
    printf("%i %f %i\n",last_times, par_c,  par_p );
    result = com(g, par_p) + com(c, last_times) + com(p, par_c);
    printf("%i", result);
    return 0;
}
//7 14
//GPGGPCG

//6 25
//PCGCPC

//245 1214
//CCGGPCCPGCCCPCCCPPCPPCGGCGCGCCPGGPCGGGCPCPGGPCCPPCCGPPGGGPPCPGGPPGCPGCCCGCCPCPCPCPCGPCGGCGPGCGGGCGCCGPCCGPGCCCPCCPPPPPPGGCGPCGGGCGGGGPPPCPGGCCCGCGCPGGCPCCGCCCPPPPPCGCCCPPCPPPCCPGCCPGGCPCCCPGCPGGGPCGGPPGPGCPPPGCCCGCGPPCPCPPPPCPCCPPPPPCCCCPPPPPCGP

//102 145
//GCCPGPCGPCGGCGPGPGCGPPGPGPPGGPGGCPGPGPCGPPCGGCCPPPGCGGCCCPPCGCGGGPPCPGPGPCGPGPPPGGGGCPPGCPCCGPGCPCGGPG