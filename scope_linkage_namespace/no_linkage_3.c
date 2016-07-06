/* If an identifier has no linkage, there shall be no more than one declaration of the identifier
 * (in a declarator or type specifier) with the same scope and in the same name space, except
 * for tags as specified in 6.7.2.3.
 */
int main(int argc,char *argv[])
{
	int a;		// no linkage 
	extern int a;	// same scope, same name space
	return 0;
}
