    #include <unistd.h>

    int	main(int argc, char **argv)
    {
		

		if (argc <= 1) {
			    write(1, "wrong number of arguments\n", 26);
	return 0 ;
		}
	
      int y = 0;
       
      
        while(argv[argc - 1][y]){
            write(1,&argv[argc - 1][y],1);
            y++;
        }
		write(1, "\n", 1);
        return (0);
    }
