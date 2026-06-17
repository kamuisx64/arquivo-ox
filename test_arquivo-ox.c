#include <assert.h>

int ehValido(char c);

int main()
{
    assert(ehValido('X'));
    assert(ehValido('O'));

    assert(!ehValido('A'));
    assert(!ehValido('x'));

    return 0;
}
