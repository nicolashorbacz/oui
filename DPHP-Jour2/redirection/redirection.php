#!/usr/bin/env php
<?php
// redirection.php for  in /home/nicolas/horbac_n/redirection
// 
// Made by HORBACZ Nicolas
// Login   <horbac_n@etna-alternance.net>
// 
// Started on  Tue Apr  4 14:26:29 2017 HORBACZ Nicolas
// Last update Tue Apr  4 16:52:38 2017 HORBACZ Nicolas
//

if ($argc < 4 || $argv[2] != ">" && $argv[2] != ">>")
  {
    echo "Usage : ./redirection.php 'string' '[> >>]' 'File'\n";
  }
else if (is_dir($argv[2]))
  {
    echo "content.php: {$argv[$i]}: Is a directory\n";
  }
else if (file_exists($argv[3]) && !is_writable($argv[3]))
  {
    echo "redirection.php: FILE: Permission denied\n";
  }
else if ($argv[2] == ">")
  {
    $file = fopen($argv[3], "w");
    fwrite($file, $argv[1]);
    fclose($file);
  }
else if ($argv[2] == ">>")
  {
    $file = fopen($argv[3], "a");
    fwrite($file, $argv[1]);
    fclose($file);
  }
else
  {
    echo "redirection.php: FILE: Cannot open file\n";
  }