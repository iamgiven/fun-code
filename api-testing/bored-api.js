// instal package axios terlebih dahulu
// $npm install axios
// node bored-api


const req = require('axios')

req
    .get('https://www.boredapi.com/api/activity')
    .then(response => {
        console.log(`You could ${response.data.activity}`)
    })
    .catch(error => {
        console.log(`ERROR! ${error}`)
    })