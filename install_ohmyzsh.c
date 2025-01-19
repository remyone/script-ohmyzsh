#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("sudo pacman -S git && sudo pacman -S zsh");
    system("sh -c \"$(wget -O- https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)\"");
    system("git clone --depth=1 https://github.com/romkatv/powerlevel10k.git ${ZSH_CUSTOM:-$HOME/.oh-my-zsh/custom}/themes/powerlevel10k");
    printf("\nOpen ~/.zshrc, find the line that sets ZSH_THEME, and change its value to \"powerlevel10k/powerlevel10k\"");
    return 0;
}