CREATE DATABASE gradesystem;

use gradesystem;

CREATE TABLE student
(
    sid INT(10) NOT NULL AUTO_INCREMENT,
    sname CHAR(20) NOT NULL,
    gender CHAR(10) NOT NULL,
    PRIMARY KEY(sid)
);

CREATE TABLE course
(
    cid INT(10) NOT NULL AUTO_INCREMENT,
    cname CHAR(10) NOT NULL,
    PRIMARY KEY(cid)
);

CREATE TABLE mark
(
    mid INT(10) NOT NULL AUTO_INCREMENT,
    sid INT(10) NOT NULL,
    cid INT(10) NOT NULL,
    score INT(10) DEFAULT '0',
    PRIMARY KEY(mid),
    CONSTRAINT stu_ck FOREIGN KEY (sid) REFERENCES student(sid),
    CONSTRAINT corse_ck FOREIGN KEY (cid) REFERENCES course(cid)    
);

INSERT INTO student VALUES(1,'Tom','male'),(2,'Jack','male'),(3,'Rose','female');

INSERT INTO course VALUES(1,'math'),(2,'physics'),(3,'chemistry');

INSERT INTO mark VALUES(1,1,1,80),(2,2,1,85),(3,3,1,90),(4,1,2,60),(5,2,2,90),(6,3,2,75),(7,1,3,95),(8,2,3,75),(9,3,3,85);