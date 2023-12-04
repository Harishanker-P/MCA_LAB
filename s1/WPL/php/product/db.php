<?php
echo "hellow";
$con=new mysqli('localhost','root','');
if($con->connect_error)
{
    die("error caught $con->connect_error");
}
$q="CREATE DATABASE IF NOT EXISTS PRODUCTS";
if(!$con->query($q))
{
    echo "failed to create database : $con->error";
   
}
else{
    $con=new mysqli('localhost','root','','PRODUCTS');
    $q="CREATE TABLE IF NOT EXISTS `PRODUCTS`.`poduct_details` (`id` INT(4) NOT NULL AUTO_INCREMENT , `name` VARCHAR(20) NOT NULL , `qty` INT(5) NOT NULL DEFAULT '0' , `unit_price` INT(5) NOT NULL , `total_price` INT(5) NOT NULL , PRIMARY KEY (`id`)) ENGINE = InnoDB;";


    if(!$con->query($q))
    {
        echo "failed to connect database : $con->error";

    }
}

?>