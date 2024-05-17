package main 

import 

(

        "os/exec"
	"fmt"
)


func main(){
//cmd := exec.Command("cd /etc/colortokens/; sudo sepolicy generate --init /etc/colortokens/ctupdater-tmp; sudo bash ctupdater_tmp.sh; sudo ausearch -c 'ctupdater-tmp' --raw | audit2allow -M my-ctupdater-tmp; semodule -i my-ctupdater-tmp.pp")
cmd := exec.Command("sh", "-c", "cd /etc/colortokens/; sudo sepolicy generate --init /etc/colortokens/ctupdater-tmp; sudo bash ctupdater_tmp.sh; sudo ausearch -c 'ctupdater-tmp' --raw | audit2allow -M my-ctupdater-tmp; semodule -i my-ctupdater-tmp.pp")
err := cmd.Start()
if err != nil {
                err = fmt.Errorf("failed to start the child process %s", err)
                return
        }
err = cmd.Wait();
if err != nil {
                err = fmt.Errorf("failed to start the child process %s", err)
                return
}
return
}



