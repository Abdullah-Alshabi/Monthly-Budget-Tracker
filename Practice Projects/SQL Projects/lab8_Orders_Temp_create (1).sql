/*
CREATE stmt for Lab No.08 exercises
Author: Ziyad Alsaeed
Date:  April 4, 2015

Updated on Oct 25, 2022
Change: Added drop stmt for MySQL
By: Ziyad Alsaeed
*/

-- Drop tables if they exists to avoid "already exists" errors.
-- For MYSQL
DROP TABLE IF EXISTS `Orders`;
DROP TABLE IF EXISTS `Customer`;
DROP TABLE IF EXISTS `Supplier`;

-- For MS SQL
IF EXISTS (SELECT * FROM INFORMATION_SCHEMA.TABLES WHERE TABLE_NAME = 'Orders')
    DROP TABLE Orders;	

IF EXISTS (SELECT * FROM INFORMATION_SCHEMA.TABLES WHERE TABLE_NAME = 'Customer')
    DROP TABLE Customer;

IF EXISTS (SELECT * FROM INFORMATION_SCHEMA.TABLES WHERE TABLE_NAME = 'Supplier')
    DROP TABLE Supplier;

-- Customer table
CREATE TABLE Customer (
CID INT PRIMARY KEY,
customerName VARCHAR(25) NOT NULL,
customerDOB DATE NOT NULL,
customerAddress VARCHAR(50) NOT NULL);

-- Supplier table
CREATE TABLE Supplier (
SID INT PRIMARY KEY,
supplierName VARCHAR (25),
supplierPhone VARCHAR(30) );

-- Orders table
CREATE TABLE Orders (
OID INT PRIMARY KEY,
orderDate DATE NOT NULL,
CID INT REFERENCES Customer(CID) ON UPDATE CASCADE ON DELETE CASCADE,
SID INT REFERENCES Supplier(SID) ON UPDATE CASCADE ON DELETE CASCADE,
orderCost DECIMAL (8,2) NOT NULL);