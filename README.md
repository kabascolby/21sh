# Minishell

Shell is beautiful! Isn’t there a famous saying? _“As beautiful as Shell?”_.

## About

The objective of this project is to implement a basic shell which will be use
for future advanced projects like 21sh and 42sh.
I wrote this project to be more flexible and expandable with less dependancy.
I avoid to use some advanced feature because they will be fully implemented
in 21sh and 42sh.
The first part of 21sh is alredy implemented in minishell.

## Getting Started


### Prerequisites

Need a terminal to run on mac or linux.

```text
Iterm, terminal (mac and linux), WSL (windows)...
```

### Running the program

run the Makefile to create an executable.

```bash
git clone https://github.com/kabascolby/Minishell.git

cd Minishell

make or make re
```

After the compilation, run the executable.

```bash
./minishell
```

## Implementions

Based on the restrictions to implement this project
and the coding style imposed by 42.

### Mandatory

the instruction was to implement a serie's of builtin functions
with their basic functionality also to be able to run all the executable
specify in the PATH environement.

- Builtins functions: echo, cd, setenv, unsetenv, env, exit

```
Give an example
```

Explain what these tests test and why

### Bonuses

- Raw mode also called Non Canonical mode
- Auto completion (with tab keypad)
- Cursor Mouvement
  - Cursor positionning (keypad Left and Right);
  - History (keypad Up and Down).
- Signal management
  - `Ctrl + C`;
  - `Ctrl + Z` (I turned off. Will be updated in 21sh);
  - `Ctrl + D`.
- Execution right management (error handling)
- Multiple commands (semi colons)
- Custom Prompt
  - Display current directory name;
  - Changing prompt color depending on the exit status.
- Quotes (with `$`, `$$`, and `#` management)
  - Single quotes or strong quotes keep the string unchanged
  - Double quotes expand the string based on the value of `$[variable]` and `$$`
- Hash `#` (comment inside the terminal)
- etc;


```
Give an example
```

### And coding style tests

Explain what these tests test and why

```
Give an example
```

## Deployment

Add additional notes about how to deploy this on a live system

## Built With

- [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
- [Maven](https://maven.apache.org/) - Dependency Management
- [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Authors

- **Billie Thompson** - _Initial work_ - [PurpleBooth](https://github.com/PurpleBooth)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

- Hat tip to anyone whose code was used
- Inspiration
- etc
