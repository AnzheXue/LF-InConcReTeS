#!/bin/bash
# Distributor for federated inverted_pendulum.lf Lingua Franca program.
# Uncomment to specify to behave as close as possible to the POSIX standard.
# set -o posix
echo "Making directory LinguaFrancaRemote and subdirectories federate_name, bin, and log on host 10.34.167.169"
ssh leap10 '\
    mkdir -p ~/LinguaFrancaRemote/inverted_pendulum/bin ~/LinguaFrancaRemote/inverted_pendulum/log; \
    echo "------Build of inverted_pendulum RTI" >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log; \
    date >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log;
'
pushd /mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen > /dev/null
echo "**** Bundling source files into RTI.tar.gz"
tar -czf RTI.tar.gz --exclude build RTI
echo "**** Copying tarfile to host 10.34.167.169"
scp -r RTI.tar.gz leap10:LinguaFrancaRemote/inverted_pendulum/RTI.tar.gz
rm RTI.tar.gz
ssh leap10 '\
    cd ~/LinguaFrancaRemote/inverted_pendulum; \
    tar -xzf RTI.tar.gz; \
    rm RTI.tar.gz;
'
popd > /dev/null
echo "**** Generating and executing compile.sh on host 10.34.167.169"
ssh leap10 'cd LinguaFrancaRemote/inverted_pendulum/bin; rm -rf build_RTI.sh; echo "#!/bin/bash -l" >> build_RTI.sh; chmod +x build_RTI.sh; echo "# Build commands for inverted_pendulum RTI" >> build_RTI.sh; echo "cd ~/LinguaFrancaRemote/inverted_pendulum/RTI" >> build_RTI.sh; echo "rm -rf build && mkdir -p build && cd build && cmake .. && make 2>&1 | tee -a ~/LinguaFrancaRemote/inverted_pendulum/log/build.log" >> build_RTI.sh; echo "mv RTI ~/LinguaFrancaRemote/inverted_pendulum/bin" >>  build_RTI.sh; ~/LinguaFrancaRemote/inverted_pendulum/bin/build_RTI.sh'
echo "Making directory LinguaFrancaRemote and subdirectories federate_name, bin, and log on host 10.34.167.170"
ssh leap11 '\
    mkdir -p ~/LinguaFrancaRemote/inverted_pendulum/bin ~/LinguaFrancaRemote/inverted_pendulum/log; \
    echo "------Build of inverted_pendulum federate__s1" >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log; \
    date >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log;
'
pushd /mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen > /dev/null
echo "**** Bundling source files into federate__s1.tar.gz"
tar -czf federate__s1.tar.gz --exclude build federate__s1
echo "**** Copying tarfile to host 10.34.167.170"
scp -r federate__s1.tar.gz leap11:LinguaFrancaRemote/inverted_pendulum/federate__s1.tar.gz
rm federate__s1.tar.gz
ssh leap11 '\
    cd ~/LinguaFrancaRemote/inverted_pendulum; \
    tar -xzf federate__s1.tar.gz; \
    rm federate__s1.tar.gz;
'
popd > /dev/null
echo "**** Generating and executing compile.sh on host 10.34.167.170"
ssh leap11 'cd LinguaFrancaRemote/inverted_pendulum/bin; rm -rf build_federate__s1.sh; echo "#!/bin/bash -l" >> build_federate__s1.sh; chmod +x build_federate__s1.sh; echo "# Build commands for inverted_pendulum federate__s1" >> build_federate__s1.sh; echo "cd ~/LinguaFrancaRemote/inverted_pendulum/federate__s1" >> build_federate__s1.sh; echo "rm -rf build && mkdir -p build && cd build && cmake .. && make 2>&1 | tee -a ~/LinguaFrancaRemote/inverted_pendulum/log/build.log" >> build_federate__s1.sh; echo "mv federate__s1 ~/LinguaFrancaRemote/inverted_pendulum/bin" >>  build_federate__s1.sh; ~/LinguaFrancaRemote/inverted_pendulum/bin/build_federate__s1.sh'
echo "Making directory LinguaFrancaRemote and subdirectories federate_name, bin, and log on host 10.34.167.171"
ssh leap12 '\
    mkdir -p ~/LinguaFrancaRemote/inverted_pendulum/bin ~/LinguaFrancaRemote/inverted_pendulum/log; \
    echo "------Build of inverted_pendulum federate__s2" >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log; \
    date >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log;
'
pushd /mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen > /dev/null
echo "**** Bundling source files into federate__s2.tar.gz"
tar -czf federate__s2.tar.gz --exclude build federate__s2
echo "**** Copying tarfile to host 10.34.167.171"
scp -r federate__s2.tar.gz leap12:LinguaFrancaRemote/inverted_pendulum/federate__s2.tar.gz
rm federate__s2.tar.gz
ssh leap12 '\
    cd ~/LinguaFrancaRemote/inverted_pendulum; \
    tar -xzf federate__s2.tar.gz; \
    rm federate__s2.tar.gz;
'
popd > /dev/null
echo "**** Generating and executing compile.sh on host 10.34.167.171"
ssh leap12 'cd LinguaFrancaRemote/inverted_pendulum/bin; rm -rf build_federate__s2.sh; echo "#!/bin/bash -l" >> build_federate__s2.sh; chmod +x build_federate__s2.sh; echo "# Build commands for inverted_pendulum federate__s2" >> build_federate__s2.sh; echo "cd ~/LinguaFrancaRemote/inverted_pendulum/federate__s2" >> build_federate__s2.sh; echo "rm -rf build && mkdir -p build && cd build && cmake .. && make 2>&1 | tee -a ~/LinguaFrancaRemote/inverted_pendulum/log/build.log" >> build_federate__s2.sh; echo "mv federate__s2 ~/LinguaFrancaRemote/inverted_pendulum/bin" >>  build_federate__s2.sh; ~/LinguaFrancaRemote/inverted_pendulum/bin/build_federate__s2.sh'
echo "Making directory LinguaFrancaRemote and subdirectories federate_name, bin, and log on host 10.34.167.172"
ssh leap13 '\
    mkdir -p ~/LinguaFrancaRemote/inverted_pendulum/bin ~/LinguaFrancaRemote/inverted_pendulum/log; \
    echo "------Build of inverted_pendulum federate__s3" >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log; \
    date >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log;
'
pushd /mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen > /dev/null
echo "**** Bundling source files into federate__s3.tar.gz"
tar -czf federate__s3.tar.gz --exclude build federate__s3
echo "**** Copying tarfile to host 10.34.167.172"
scp -r federate__s3.tar.gz leap13:LinguaFrancaRemote/inverted_pendulum/federate__s3.tar.gz
rm federate__s3.tar.gz
ssh leap13 '\
    cd ~/LinguaFrancaRemote/inverted_pendulum; \
    tar -xzf federate__s3.tar.gz; \
    rm federate__s3.tar.gz;
'
popd > /dev/null
echo "**** Generating and executing compile.sh on host 10.34.167.172"
ssh leap13 'cd LinguaFrancaRemote/inverted_pendulum/bin; rm -rf build_federate__s3.sh; echo "#!/bin/bash -l" >> build_federate__s3.sh; chmod +x build_federate__s3.sh; echo "# Build commands for inverted_pendulum federate__s3" >> build_federate__s3.sh; echo "cd ~/LinguaFrancaRemote/inverted_pendulum/federate__s3" >> build_federate__s3.sh; echo "rm -rf build && mkdir -p build && cd build && cmake .. && make 2>&1 | tee -a ~/LinguaFrancaRemote/inverted_pendulum/log/build.log" >> build_federate__s3.sh; echo "mv federate__s3 ~/LinguaFrancaRemote/inverted_pendulum/bin" >>  build_federate__s3.sh; ~/LinguaFrancaRemote/inverted_pendulum/bin/build_federate__s3.sh'
echo "Making directory LinguaFrancaRemote and subdirectories federate_name, bin, and log on host 10.34.167.173"
ssh leap14 '\
    mkdir -p ~/LinguaFrancaRemote/inverted_pendulum/bin ~/LinguaFrancaRemote/inverted_pendulum/log; \
    echo "------Build of inverted_pendulum federate__s4" >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log; \
    date >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log;
'
pushd /mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen > /dev/null
echo "**** Bundling source files into federate__s4.tar.gz"
tar -czf federate__s4.tar.gz --exclude build federate__s4
echo "**** Copying tarfile to host 10.34.167.173"
scp -r federate__s4.tar.gz leap14:LinguaFrancaRemote/inverted_pendulum/federate__s4.tar.gz
rm federate__s4.tar.gz
ssh leap14 '\
    cd ~/LinguaFrancaRemote/inverted_pendulum; \
    tar -xzf federate__s4.tar.gz; \
    rm federate__s4.tar.gz;
'
popd > /dev/null
echo "**** Generating and executing compile.sh on host 10.34.167.173"
ssh leap14 'cd LinguaFrancaRemote/inverted_pendulum/bin; rm -rf build_federate__s4.sh; echo "#!/bin/bash -l" >> build_federate__s4.sh; chmod +x build_federate__s4.sh; echo "# Build commands for inverted_pendulum federate__s4" >> build_federate__s4.sh; echo "cd ~/LinguaFrancaRemote/inverted_pendulum/federate__s4" >> build_federate__s4.sh; echo "rm -rf build && mkdir -p build && cd build && cmake .. && make 2>&1 | tee -a ~/LinguaFrancaRemote/inverted_pendulum/log/build.log" >> build_federate__s4.sh; echo "mv federate__s4 ~/LinguaFrancaRemote/inverted_pendulum/bin" >>  build_federate__s4.sh; ~/LinguaFrancaRemote/inverted_pendulum/bin/build_federate__s4.sh'
echo "Making directory LinguaFrancaRemote and subdirectories federate_name, bin, and log on host 10.34.167.170"
ssh leap11 '\
    mkdir -p ~/LinguaFrancaRemote/inverted_pendulum/bin ~/LinguaFrancaRemote/inverted_pendulum/log; \
    echo "------Build of inverted_pendulum federate__p1" >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log; \
    date >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log;
'
pushd /mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen > /dev/null
echo "**** Bundling source files into federate__p1.tar.gz"
tar -czf federate__p1.tar.gz --exclude build federate__p1
echo "**** Copying tarfile to host 10.34.167.170"
scp -r federate__p1.tar.gz leap11:LinguaFrancaRemote/inverted_pendulum/federate__p1.tar.gz
rm federate__p1.tar.gz
ssh leap11 '\
    cd ~/LinguaFrancaRemote/inverted_pendulum; \
    tar -xzf federate__p1.tar.gz; \
    rm federate__p1.tar.gz;
'
popd > /dev/null
echo "**** Generating and executing compile.sh on host 10.34.167.170"
ssh leap11 'cd LinguaFrancaRemote/inverted_pendulum/bin; rm -rf build_federate__p1.sh; echo "#!/bin/bash -l" >> build_federate__p1.sh; chmod +x build_federate__p1.sh; echo "# Build commands for inverted_pendulum federate__p1" >> build_federate__p1.sh; echo "cd ~/LinguaFrancaRemote/inverted_pendulum/federate__p1" >> build_federate__p1.sh; echo "rm -rf build && mkdir -p build && cd build && cmake .. && make 2>&1 | tee -a ~/LinguaFrancaRemote/inverted_pendulum/log/build.log" >> build_federate__p1.sh; echo "mv federate__p1 ~/LinguaFrancaRemote/inverted_pendulum/bin" >>  build_federate__p1.sh; ~/LinguaFrancaRemote/inverted_pendulum/bin/build_federate__p1.sh'
echo "Making directory LinguaFrancaRemote and subdirectories federate_name, bin, and log on host 10.34.167.171"
ssh leap12 '\
    mkdir -p ~/LinguaFrancaRemote/inverted_pendulum/bin ~/LinguaFrancaRemote/inverted_pendulum/log; \
    echo "------Build of inverted_pendulum federate__p2" >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log; \
    date >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log;
'
pushd /mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen > /dev/null
echo "**** Bundling source files into federate__p2.tar.gz"
tar -czf federate__p2.tar.gz --exclude build federate__p2
echo "**** Copying tarfile to host 10.34.167.171"
scp -r federate__p2.tar.gz leap12:LinguaFrancaRemote/inverted_pendulum/federate__p2.tar.gz
rm federate__p2.tar.gz
ssh leap12 '\
    cd ~/LinguaFrancaRemote/inverted_pendulum; \
    tar -xzf federate__p2.tar.gz; \
    rm federate__p2.tar.gz;
'
popd > /dev/null
echo "**** Generating and executing compile.sh on host 10.34.167.171"
ssh leap12 'cd LinguaFrancaRemote/inverted_pendulum/bin; rm -rf build_federate__p2.sh; echo "#!/bin/bash -l" >> build_federate__p2.sh; chmod +x build_federate__p2.sh; echo "# Build commands for inverted_pendulum federate__p2" >> build_federate__p2.sh; echo "cd ~/LinguaFrancaRemote/inverted_pendulum/federate__p2" >> build_federate__p2.sh; echo "rm -rf build && mkdir -p build && cd build && cmake .. && make 2>&1 | tee -a ~/LinguaFrancaRemote/inverted_pendulum/log/build.log" >> build_federate__p2.sh; echo "mv federate__p2 ~/LinguaFrancaRemote/inverted_pendulum/bin" >>  build_federate__p2.sh; ~/LinguaFrancaRemote/inverted_pendulum/bin/build_federate__p2.sh'
echo "Making directory LinguaFrancaRemote and subdirectories federate_name, bin, and log on host 10.34.167.172"
ssh leap13 '\
    mkdir -p ~/LinguaFrancaRemote/inverted_pendulum/bin ~/LinguaFrancaRemote/inverted_pendulum/log; \
    echo "------Build of inverted_pendulum federate__p3" >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log; \
    date >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log;
'
pushd /mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen > /dev/null
echo "**** Bundling source files into federate__p3.tar.gz"
tar -czf federate__p3.tar.gz --exclude build federate__p3
echo "**** Copying tarfile to host 10.34.167.172"
scp -r federate__p3.tar.gz leap13:LinguaFrancaRemote/inverted_pendulum/federate__p3.tar.gz
rm federate__p3.tar.gz
ssh leap13 '\
    cd ~/LinguaFrancaRemote/inverted_pendulum; \
    tar -xzf federate__p3.tar.gz; \
    rm federate__p3.tar.gz;
'
popd > /dev/null
echo "**** Generating and executing compile.sh on host 10.34.167.172"
ssh leap13 'cd LinguaFrancaRemote/inverted_pendulum/bin; rm -rf build_federate__p3.sh; echo "#!/bin/bash -l" >> build_federate__p3.sh; chmod +x build_federate__p3.sh; echo "# Build commands for inverted_pendulum federate__p3" >> build_federate__p3.sh; echo "cd ~/LinguaFrancaRemote/inverted_pendulum/federate__p3" >> build_federate__p3.sh; echo "rm -rf build && mkdir -p build && cd build && cmake .. && make 2>&1 | tee -a ~/LinguaFrancaRemote/inverted_pendulum/log/build.log" >> build_federate__p3.sh; echo "mv federate__p3 ~/LinguaFrancaRemote/inverted_pendulum/bin" >>  build_federate__p3.sh; ~/LinguaFrancaRemote/inverted_pendulum/bin/build_federate__p3.sh'
echo "Making directory LinguaFrancaRemote and subdirectories federate_name, bin, and log on host 10.34.167.173"
ssh leap14 '\
    mkdir -p ~/LinguaFrancaRemote/inverted_pendulum/bin ~/LinguaFrancaRemote/inverted_pendulum/log; \
    echo "------Build of inverted_pendulum federate__p4" >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log; \
    date >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log;
'
pushd /mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen > /dev/null
echo "**** Bundling source files into federate__p4.tar.gz"
tar -czf federate__p4.tar.gz --exclude build federate__p4
echo "**** Copying tarfile to host 10.34.167.173"
scp -r federate__p4.tar.gz leap14:LinguaFrancaRemote/inverted_pendulum/federate__p4.tar.gz
rm federate__p4.tar.gz
ssh leap14 '\
    cd ~/LinguaFrancaRemote/inverted_pendulum; \
    tar -xzf federate__p4.tar.gz; \
    rm federate__p4.tar.gz;
'
popd > /dev/null
echo "**** Generating and executing compile.sh on host 10.34.167.173"
ssh leap14 'cd LinguaFrancaRemote/inverted_pendulum/bin; rm -rf build_federate__p4.sh; echo "#!/bin/bash -l" >> build_federate__p4.sh; chmod +x build_federate__p4.sh; echo "# Build commands for inverted_pendulum federate__p4" >> build_federate__p4.sh; echo "cd ~/LinguaFrancaRemote/inverted_pendulum/federate__p4" >> build_federate__p4.sh; echo "rm -rf build && mkdir -p build && cd build && cmake .. && make 2>&1 | tee -a ~/LinguaFrancaRemote/inverted_pendulum/log/build.log" >> build_federate__p4.sh; echo "mv federate__p4 ~/LinguaFrancaRemote/inverted_pendulum/bin" >>  build_federate__p4.sh; ~/LinguaFrancaRemote/inverted_pendulum/bin/build_federate__p4.sh'
echo "Making directory LinguaFrancaRemote and subdirectories federate_name, bin, and log on host 10.34.167.169"
ssh leap10 '\
    mkdir -p ~/LinguaFrancaRemote/inverted_pendulum/bin ~/LinguaFrancaRemote/inverted_pendulum/log; \
    echo "------Build of inverted_pendulum federate__plant" >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log; \
    date >> ~/LinguaFrancaRemote/inverted_pendulum/log/build.log;
'
pushd /mnt/c/Users/32739/LF/LF-InConcReTeS/fed-gen/inverted_pendulum/src-gen > /dev/null
echo "**** Bundling source files into federate__plant.tar.gz"
tar -czf federate__plant.tar.gz --exclude build federate__plant
echo "**** Copying tarfile to host 10.34.167.169"
scp -r federate__plant.tar.gz leap10:LinguaFrancaRemote/inverted_pendulum/federate__plant.tar.gz
rm federate__plant.tar.gz
ssh leap10 '\
    cd ~/LinguaFrancaRemote/inverted_pendulum; \
    tar -xzf federate__plant.tar.gz; \
    rm federate__plant.tar.gz;
'
popd > /dev/null
echo "**** Generating and executing compile.sh on host 10.34.167.169"
ssh leap10 'cd LinguaFrancaRemote/inverted_pendulum/bin; rm -rf build_federate__plant.sh; echo "#!/bin/bash -l" >> build_federate__plant.sh; chmod +x build_federate__plant.sh; echo "# Build commands for inverted_pendulum federate__plant" >> build_federate__plant.sh; echo "cd ~/LinguaFrancaRemote/inverted_pendulum/federate__plant" >> build_federate__plant.sh; echo "rm -rf build && mkdir -p build && cd build && cmake .. && make 2>&1 | tee -a ~/LinguaFrancaRemote/inverted_pendulum/log/build.log" >> build_federate__plant.sh; echo "mv federate__plant ~/LinguaFrancaRemote/inverted_pendulum/bin" >>  build_federate__plant.sh; ~/LinguaFrancaRemote/inverted_pendulum/bin/build_federate__plant.sh'
