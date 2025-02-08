select * from Student;
select * from Course;
select * from Semester;
select * from Register;


Drop table Register;
Drop table Semester;
Drop table Course;
Drop table Student;

/* Q3 */
update Course
	set CourseTitle='Database1'
		where CourseTitle='Database';

/* Q4 */
update Student
	set lastname='saleh'
		where Dept='CS';

/* Q5 */	
UPDATE Student
	SET Dept = 'CS';


/* Q6 */
DELETE 
	FROM Register
		WHERE stdNo = 'S0211';


/* Q7 */
UPDATE Course
	SET Cost = Cost * 1.05
		WHERE courseTitle = 'C Programming';


/* Q8 */
DELETE 
	FROM Student
		WHERE givenname = 'Omar Riyadh' AND lastname = 'Mohammad';