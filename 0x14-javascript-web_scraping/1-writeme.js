#!/usr/bin/node

const fs = require('fs')
const file_name = process.argv[2];
const string = process.argv[3];

fs.writeFile(file_name, string, 'utf-8',  (error) => {
	if (error) {
		console.log(error)
	}
});
