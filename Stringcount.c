#include <stdio.h>               
int main() {
char str[200];
int i, alphabetCount = 0, wordCount = 0;
int inWord = 0;

printf(&quot;Enter a string: &quot;);
fgets(str, sizeof(str), stdin);

for (i = 0; str[i] != &#39;\0&#39;; i++) {
if (isalpha(str[i])) {
alphabetCount++;
}

if (isspace(str[i]) || str[i] == &#39;\n&#39; || str[i] == &#39;\t&#39;) {
inWord = 0;
} else if (inWord == 0) {
inWord = 1;
wordCount++;
}
}

printf(&quot;Number of alphabets: %d\n&quot;, alphabetCount);
printf(&quot;Number of words: %d\n&quot;, wordCount);
return 0;
}