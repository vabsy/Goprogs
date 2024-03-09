package main

import "fmt"


func main(){
     messages_array := []string{
     "vaibhav",
     "dheeks",
     "bubu",
     "dudu",
     } 

num_messages := float64(len(messages_array))
cost_per_message := 0.02

total_cost := cost_per_message * num_messages

fmt.Printf("Total cost is %f \n", total_cost)
}
