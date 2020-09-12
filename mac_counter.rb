# A module of counter for times of mac_n1 ack.

system :mac_counter do |layer_size|
  input :clk, :ack, :rst
  output :ack_mac

  [layer_size.width].inner :q

  par(clk.posedge) do
    hif(rst) do
      q <= 0
      ack_mac <= 0
    end
    helsif(ack) do
      q <= q + 1
    end
  end

  par(clk.negedge) do
    hif(q == layer_size - 1) do
      q <= 0
    end
  end
  
  par(q) do
    hif(q == layer_size - 1) do
      ack_mac <= 1
    end
  end
end