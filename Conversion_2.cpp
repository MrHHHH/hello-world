#include<stdio.h>
#include<string.h>
#define HEX_MAX 100000
#define BIN_MAX 400000
#define OCT_MAX 300000
void hexTobin(char hex[HEX_MAX],char bin[BIN_MAX]) {
  int i, j, l = strlen(hex),value,count=0;
  for (i = l - 1; i >= 0; i--) {
    switch (hex[i]) {
    case 'A':value = 10; break;
    case 'B':value = 11; break;
    case 'C':value = 12; break;
    case 'D':value = 13; break;
    case 'E':value = 14; break;
    case 'F':value = 15; break;
    default:value = hex[i] - '0'; 
    }
    j = 0;
    while (j<4)
    {
      bin[count+j] = value % 2+'0';
      value /= 2;
      j++;
    }
    count += 4;
  }
  bin[4 * l] = '\0';
}
int binTooct(char bin[BIN_MAX], char oct[OCT_MAX]) {
  int i, j, l = strlen(bin);
  if (l % 3 == 1) {
    bin[l] = bin[l + 1] = '0'; l += 2; }
  if (l % 3 == 2) {  bin[l] = '0';l++; }
  for (i = 0, j = 0; i  < l; j++, i += 3) {
    oct[j] = bin[i]-'0' + (bin[i + 1] - '0') * 2 + (bin[i + 2]-'0') * 4+'0';
  }
  while (oct[j - 1] == '0') j--;
  return j;
}
int main() {
  int n,l;
  char hex[HEX_MAX] = {0}, bin[BIN_MAX] = { 0 }, oct[OCT_MAX] = { 0 };
  scanf("%d", &n);
  while(n--) {
    scanf("%s", hex);
    hexTobin(hex, bin);
    l=binTooct(bin, oct);
    while (l>0)
      printf("%c", oct[--l]);
    printf("\n");
  }
  return 0;
}