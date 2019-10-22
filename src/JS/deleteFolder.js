const fs = require('fs');

const deleteFolder = path => {
    try {
      if (fs.existsSync(path)) {
        fs.readdirSync(path).forEach(function(file, index) {
          const currentPath = `${path}/${file}`;
          if (fs.lstatSync(currentPath).isDirectory()) {
            deleteFolder(currentPath);
          }
        });
        fs.rmdirSync(path);
      }
    } catch (error) {
        console.error(error);
    }
};

deleteFolder('name_folder');