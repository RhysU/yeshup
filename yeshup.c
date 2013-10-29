#include <signal.h>
#include <sys/prctl.h>
#include <unistd.h>

int main(int argc, char** argv)
{
    if(argc < 2)
    {
        return -1;
    }
    prctl(PR_SET_PDEATHSIG, SIGHUP, 0, 0, 0);
    return execvp(argv[1], &argv[1]);
}
