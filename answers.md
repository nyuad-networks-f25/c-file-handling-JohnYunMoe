## Working with the file

(1) The most authentic place to find information about these functions is their man pages.

(2) The mode to use when opening data.bin would be to use rb and the function fopen. If I had deleted the data.bin file and tried to open it using fopen, there would be a segmentation fault because the file doesn't exist. To report the error and exit gracefully, the best way would be the check if fopen returns NULL and then print an error message. 
