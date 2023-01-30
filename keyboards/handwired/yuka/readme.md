# Yuka keyboard
![Yuka](https://media.giphy.com/media/13HBDT4QSTpveU/giphy.gif)

## Split 58 ortholinear handwired by Yuka

* Keyboard Maintainers: 
    - [Yuka](https://github.com/yuka)
    - [Ciutadella](https://github.com/ciutadellla)


Build Via from docker/Gitpod:
```
rm -rf .build && util/docker_build.sh handwired/yuka:via
``` 

Build from docker/Gitpod:
```
rm -rf .build && rm -rf handwired_yuka_default.hex.caca && util/docker_build.sh handwired/yuka:default && mv handwired_yuka_default.hex handwired_yuka_default.hex.caca
``` 

