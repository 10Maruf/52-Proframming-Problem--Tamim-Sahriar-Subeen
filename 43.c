// Calculation
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int p, q, c, temp = 1;
        scanf("%d %d %d", &p, &q, &c);
        for (int i = 1; i <= q; i++)
        {
            temp = (temp * p) % c;
        }
        printf("Result = %d\n", temp);
    }

    return 0;
}
//another way
// #include <stdio.h>

// int main(void){
//     // create necessary variable
//     int t, // store test case
//         base, // for store base (p)
//         power, // for store power
//         divider, // store divider
//         mod, // for store remainder
//         i; // for iterate the loop

//     // get test case (t)
//     scanf("%d",&t);

//     // run the program
//     while(t--){
//         // get base, power and divider
//         scanf("%d %d %d",&base,&power,&divider);

//         // logic --> figure out base^power [mods] divider
//         while(power % divider == 0){
//             power /= divider;
//         }

//         mod = base%divider ;
//         for(i = 1; i < power;i++){
//             mod = (mod*base)%divider; 
//         }

//         printf("Result = %d\n",mod);
//     }

//     return 0;
// }
//bit shifting method
// #include <stdio.h>

// int power(int p, int q, int c) {
//     int res = 1;
//     while (q > 0) {
//         if (q & 1) {
//             res = (res * p) % c;
//         }
//         p = (p * p) % c;
//         q >>= 1;
//     }
//     return res;
// }

// int main(int argc, char const *argv[]) {
//     int t;
//     scanf("%d", &t);
//     while (t--) {
//         int p, q, c;
//         scanf("%d %d %d", &p, &q, &c);
//         printf("Result = %d\n", power(p, q, c));
//     }
//     return 0;
// }
