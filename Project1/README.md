# Story Replacement Project

This program reads a story from the user line by line, until the user enters 'End of story.' as a line. Afterwards, the user enters two one-word names as two more lines. The program then replaces each appearance of the first name in the story with the second name, and then prints the new version of the story to the screen.

## Constraints
- The story will have at most 1000 letters, and each line will have at most 100 letters.
- The two names will have at most 20 letters each.
- The names will always start with capital letters.
- The first name can either be longer, or shorter than the second one.

## String Handling
You may write as many functions as you wish, and you may use `<string.h>` functions like: `strcpy`, `strcat`, `strcmp`, etc. You may also use: `gets`, `puts`, as string reading/writing operations. Note that when you read a string with `gets()` or `scanf()`, there will likely be a newline ('\n') character at the end of the string just before the null character ('\0') because of pressing the enter key.

## Project Files
- [proj1.c](proj1.c) - The main C file containing my project work.

## Examples
### Input
Once upon a time there was a
castle
named Wolfenstein. Whoever
goes
to the castle Wolfenstein,
would never come back.
End of story.
Wolfenstein
Transylvania
### Output
Once upon a time there was a
castle
named Transylvania. Whoever
goes
to the castle Transylvania,
would never come back.
End of story.