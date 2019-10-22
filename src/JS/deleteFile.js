const fs = require('fs');
const path = require('path');

const deleteFile = filename => {
  try {
    return fs.unlinkSync(path.join(__dirname, filename));
  } catch (error) {}
};

deleteFile('file.js');
