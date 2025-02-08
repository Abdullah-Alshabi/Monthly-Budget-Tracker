/*
Insert test stmt for Lab No.08 exercises
Author: Ziyad Alsaeed
Date: April 4, 2015 
*/

-- insert into Customer table
INSERT INTO Customer (CID, customerName, customerDOB, customerAddress) VALUES 
(1, 'Ahmed', '1999-07-10', 'Unayzah'),
(2, 'Salem', '1989-12-12', 'Buraydah'),
(3, 'Khaled', '1995-01-19', 'ArRass'),
(4, 'Abdullah', '1993-02-22', 'Albukairiah'),
(5, 'Anas', '1988-07-01', 'Albdaie'),
(6, 'Tariq', '1992-11-12', 'Riyadh Alkhabra'),
(7, 'Raed', '1987-12-23', 'Almuthnab'),
(8, 'Fahad', '1964-07-10', 'Unayzah'),
(9, 'Sami', '1992-12-12', 'Buraydah'),
(10, 'Saud', '1984-01-19', 'ArRass'),
(11, 'Nasser', '2000-07-10', 'Unayzah'),
(12, 'Faleh', '1944-12-12', 'Buraydah'),
(13, 'Mohammed', '1955-01-19', 'ArRass'),
(14, 'Suliman', '1976-07-10', 'Unayzah'),
(15, 'Ali', '1947-12-12', 'Buraydah'),
(16, 'Ibrahim', '1985-01-19', 'ArRass');

-- insert into Supplier table
INSERT INTO Supplier (SID, supplierName, supplierPhone) VALUES 
(901, 'Microsoft', '+12063863234'),
(920, 'Hewlett Packard', '+16501235647'),
(922, 'Sun Micorsystems', '+14062347587'),
(950, 'Apple', '+12345678974');


-- insert into Orders table
INSERT INTO Orders (OID, orderDate, CID, SID, orderCost) VALUES 
(110, '2015-02-07', 3, 950, 3000),
(111, '2015-02-19', 1, 922, 5000),
(112, '2015-02-22', 6, 901, 2200),
(122, '2015-02-25', 2, 950, 3200),
(123, '2015-02-25', 7, 950, 10000),
(126, '2015-03-01', 12, 950, 1500),
(129, '2015-03-01', 13, 922, 7200),
(130, '2015-03-01', 14, 901, 3800),
(133, '2015-03-01', 15, 950, 4500),
(134, '2015-03-01', 16, 950, 7700),
(136, '2015-03-07', 3, 950, 15000),
(137, '2015-03-07', 1, 922, 8800),
(138, '2015-03-07', 6, 901, 1100),
(140, '2015-03-11', 2, 950, 3400),
(141, '2015-03-11', 7, 950, 2500),
(142, '2015-03-12', 8, 950, 7675.04),
(143, '2015-03-13', 9, 922, 458.14),
(144, '2015-03-16', 10, 901, 4586.15),
(145, '2015-03-19', 11, 950, 1582.5),
(146, '2015-03-19', 7, 950, 1458.5),
(147, '2015-03-19', 3, 950, 145.15),
(148, '2015-03-19', 1, 922, 5552.12),
(149, '2015-03-19', 6, 901, 7852.15),
(150, '2015-03-20', 2, 950, 3400.00),
(155, '2015-03-21', 7, 950, 4500.25);

SELECT * FROM Customer;
SELECT * FROM Supplier;
SELECT * FROM Orders;