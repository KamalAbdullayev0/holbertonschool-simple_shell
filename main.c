#include "main.h"
/**
  * main - shell start function
  * @argv: argument variables
  * @argc: argument count
  * @env: env variables
  * Return: always 0
  */
int main(int argc, char **argv, char **env)
{
	char **fcommand, *buf, *command;
	int status, lk = 0, r_code = 0;

	(void)argc, path_var = get_path(env);
	while (1)
	{
		status = isatty(STDIN_FILENO), print_prompt(status);
		fcommand = get_command(&buf);
		if (main_helper(fcommand, status, buf))
			break;
		if (!strcmp(fcommand[0], " "))
		{
			free(buf), free(fcommand[0]), free(fcommand);
			continue;
		}
		command = strdup(fcommand[0]);
		if (!strcmp("env", fcommand[0]))
		{
			print_env(), free(buf), free(fcommand), free(command);
			continue;
		}
		fcommand[0] = find_file(fcommand[0], &lk);
		if (!fcommand[0])
		{
			fprintf(stderr, "%s: 1: %s: not found\n", argv[0], command);
			free(buf), free(fcommand), free(command), errno = 0;
			if (!status)
				free_path(), exit(127);
			continue;
		}
		r_code = exec_c(fcommand), free(buf);
		if (lk)
			free(fcommand[0]), lk = 0;
		free(fcommand), free(command);
	}
	return (r_code);
}
