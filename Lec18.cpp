#include <simplecpp>

void generate_words(int length, char sofar[]) {
  if (length == 0) {
    cout << sofar << "\n";
  } else {
    char sofar_new[length + 1]; // Create a new character array to store the
                                // modified word
    strcpy(sofar_new, sofar);   // Copy the contents of 'sofar' to 'sofar_new'

    sofar_new[strlen(sofar)] = 'a';      // Append 'a' to the end of 'sofar_new'
    sofar_new[strlen(sofar) + 1] = '\0'; // Add null terminator to the end
    generate_words(length - 1, sofar_new);

    sofar_new[strlen(sofar)] = 'b';      // Replace the last character with 'b'
    sofar_new[strlen(sofar) + 1] = '\0'; // Add null terminator to the end
    generate_words(length - 1, sofar_new);

    sofar_new[strlen(sofar)] = 'c';      // Replace the last character with 'c'
    sofar_new[strlen(sofar) + 1] = '\0'; // Add null terminator to the end
    generate_words(length - 1, sofar_new);
  }
}

main_program {
  int n;
  cin >> n;
  char sofar[n + 1];
  sofar[0] = '\0';
  generate_words(n, sofar);
}
