<?php

    $con=new mysqli('localhost','root','');

    
    if($con->connect_error)
    {
        die("error caught $con->connect_error");
    }
   $q="CREATE DATABASE IF NOT EXISTS PRODUCTS";
   if($con->query($q))
   {
    echo "database created successfully";
   }
   else
   {
    echo "failed to create database : $con->error";

   }
   
?>