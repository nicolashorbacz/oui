#!/usr/bin/env php
<?php
// hello.php for  in /home/nicolas/horbac_n/hello
// 
// Made by HORBACZ Nicolas
// Login   <horbac_n@etna-alternance.net>
// 
// Started on  Mon Apr  3 10:29:52 2017 HORBACZ Nicolas
// Last update Mon Apr  3 19:21:47 2017 HORBACZ Nicolas
//

function hello($param = null)
{
  if ($param)
    {
      echo "Hello {$param}\n";
    }
  else
    {
      echo "Hello world !\n";
    }
}
hello();