#!/usr/bin/node

const fs = require('fs')
const args = process.argv;

const input = args[2];
fs.readFile(input, 'utf-8', (error, data) => {
	if (error) {
		console.log(error);
	} else {
		console.log(data);
	}
});
