cat << 'EOF' > hello.c
#include <stdio.h>

int main(void) {
    printf("Hello, Git!\n");
    return 0;
}
EOF
git add hello.c
git commit -m "Add hello.c"
