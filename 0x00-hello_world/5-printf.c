 */
int main(void)
{
char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, ch, sizeof(ch));
char ch[] = fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
write(2,  ch, sizeof(ch));
return (1);
}
