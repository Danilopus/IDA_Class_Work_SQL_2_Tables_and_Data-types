﻿
// Class Work 20.09.2023 -------------------------------------------	

/// Создание таблиц и типы данных

/*
 

*/

/// синтаксис
/*

CREATE TABLE

ALTER TABLE - запрос на изменение таблицы


*/

// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main(){}

/*

CREATE DATABASE hospital

GO

USE hospital

GO

CREATE TABLE Departments
(
	id INT IDENTITY(1,1) PRIMARY KEY NOT NULL,
	Building INT NOT NULL,
		CONSTRAINT CHECK_Building_Departments  CHECK (Building > 1 AND Building < 5),
	Financing money NOT NULL DEFAULT 0,
		CONSTRAINT CHECK_Financing_Departments  CHECK (Financing >= 1),
	[Name] NVARCHAR(100)  NOT NULL UNIQUE,
		CONSTRAINT CHECK_Name_Departments  CHECK ([Name] <> '')
);
GO

CREATE TABLE Diseases
(
	id INT IDENTITY(1,1) PRIMARY KEY NOT NULL,
	[Name] NVARCHAR(100) NOT NULL UNIQUE
		CONSTRAINT CHECK_Name_Diseases  CHECK ([Name] <> ''),
	Severity INT NOT NULL DEFAULT 1
		CONSTRAINT CHECK_Severity_Diseases  CHECK (Severity >= 1),
)
GO

CREATE TABLE Doctors
(
	id INT IDENTITY(1,1) PRIMARY KEY NOT NULL,
	[Name] NVARCHAR(max) NOT NULL
		CONSTRAINT CHECK_Name_Doctors  CHECK ([Name] <> ''),
	Phone CHAR(10),
	Salary MONEY NOT NULL
		CONSTRAINT CHECK_Salary_Doctors  CHECK (Salary > 0),
	Surname NVARCHAR(max) NOT NULL
		CONSTRAINT CHECK_Name_Doctors  CHECK (Surname <> '')
)
GO

*/

