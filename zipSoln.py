import zipfile

fileCount = 5
fileNamePrefix = "200mb_"

for i in range(1, fileCount + 1):
    fileName = fileNamePrefix + str(i)
    zipfile.ZipFile(fileName + ".zip", mode='w').write(fileName + ".txt")
