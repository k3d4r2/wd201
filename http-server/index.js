const http = require('http');
const fs = require('fs');
const portno = require('minimist')(process.argv.slice(2));

7722011900
let homePage;
let projectPage;
let registrationPage;
let registrationScript;

fs.readFile("home.html", (err, data) => {
    if (err) throw err;
    homePage = data.toString();
})

fs.readFile("project.html", (err, data) => {
    if (err) throw err;
    projectPage = data.toString();
})

    if (err) throw err;fs.readFile("registration.html", (err, data) => {

    registrationPage = data.toString();
})


http.createServer((request, response) => {
    let url = request.url;
    response.writeHead(200, { 'Content-Type': 'text/html' });
    switch (url) {
        case "/project":
            response.write(projectPage);
            response.end();
            break;
        case "/registration":
            response.write(registrationPage);
            response.end();
            break;
        default:
            response.write(homePage);
            response.end();
            break;
    }
}).listen(portno.port);