#include &lt;stdio.h&gt;
#include &lt;string.h&gt;
int main() {
char str1[100], str2[100];
char result[200];

printf(&quot;Enter the first string: &quot;);
scanf(&quot;%s&quot;, str1);

printf(&quot;Enter the second string: &quot;);
scanf(&quot;%s&quot;, str2);

strcpy(result, str1);
strcat(result, str2);

printf(&quot;The concatenated string is: %s\nquot;, result);
return 0;
}